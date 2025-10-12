Public Class Form1
    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged
        Dim symbol As String
        Dim Result As Double
        symbol = ListBox1.Text

        If symbol = "Plus or +" Then
            Result = Val(TextBox1.Text) + Val(TextBox2.Text)
            Label2.Text = "Your result is: " & Result
        ElseIf symbol = "Less or -" Then
            Result = Val(TextBox1.Text) - Val(TextBox2.Text)
            Label2.Text = "Your result is: " & Result
        ElseIf symbol = "Multiply or *" Then
            Result = Val(TextBox1.Text) * Val(TextBox2.Text)
            Label2.Text = "Your result is: " & Result
        ElseIf symbol = "Divide or /" Then
            Result = Val(TextBox1.Text) / Val(TextBox2.Text)
            Label2.Text = "Your result is: " & Result
        End If
    End Sub
End Class
